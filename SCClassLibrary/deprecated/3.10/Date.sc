+ Date {
	*getDate {
		this.deprecated(thisMethod, this.class.findMethod(\localtime));
		^this.localtime
	}

	dayOfWeek_ { |x|
		this.deprecated(thisMethod); // no-op; can't set day of week
	}
}
