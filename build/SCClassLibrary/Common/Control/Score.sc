Score {
	*play { arg server, file;
		var size, osccmd, timekeep, eventList;
		eventList = thisProcess.interpreter.executeFile(file);
		size = eventList.size;
		timekeep = 0;
		Routine({
			size.do { |i|
				var deltatime, msg;
				osccmd = eventList[i];
				deltatime = osccmd[0];
				msg = osccmd[1];
				(deltatime-timekeep).wait;
				server.sendBundle(server.latency, msg);
				timekeep = deltatime;
			}
		}).play;
	}
		
	*write { arg file, oscfile;
		var size, osccmd, eventList, f;
		eventList = thisProcess.interpreter.executeFile(file);
		size = eventList.size;
		f = File(oscfile, "w");
		Routine({
			size.do { |i|
				osccmd = eventList[i].asRawOSC;
				f.write(osccmd.size).write(osccmd);
			}
		}).play;
		f.close;
		"done".postln;
	}
}