/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Library/Audio/MIDI Drivers/AppleMIDIBluetoothDriver.plugin/AppleMIDIBluetoothDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface BLEMIDITimeStamper : NSObject {

	NSMutableArray* offsetHistory;
	unsigned long long receivedTime;
	unsigned long long lastReceivedTime;
	unsigned long long lastGeneratedTimestamp;
	unsigned long long lastReceivedOffsetTimestamp;
	unsigned long long averageWaitTime_ns;
	unsigned long long connectionInterval_ns;
	int firstOffset;
	unsigned short lastReceivedOffset;
	BOOL hasBeenReset;

}
-(unsigned long long)generateTimeStampForOffset:(unsigned short)arg1 ;
-(void)setConnectionIntervalNanos:(unsigned long long)arg1 ;
-(void)setReceiveTime:(unsigned long long)arg1 ;
-(void)addOffset:(unsigned short)arg1 ;
-(BOOL)offsetIsUsable:(unsigned short)arg1 numberOfWraps:(unsigned short*)arg2 ;
-(int)modsignWithTimeDifference:(long long)arg1 range:(unsigned short)arg2 ;
-(id)init;
-(void)reset;
@end

