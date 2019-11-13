default:
	iverilog -o tb.vvp stopwatch.v stopwatch-tb.v stopwatch_counter.v segment_display.v counter.v debouncer.v clock.v

run:
	vvp tb.vvp

clean:
	rm tb.vvp
