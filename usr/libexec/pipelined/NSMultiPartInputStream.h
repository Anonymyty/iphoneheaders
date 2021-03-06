/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pipelined/pipelined-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSString;

@interface NSMultiPartInputStream : NSInputStream {

	vector<NSInputStream *, std::__1::allocator<NSInputStream *> >* fParts;
	unsigned long long fCurrentPart;
	NSString* fMultiPartBoundary;
	pair<NSInputStream *, unsigned long> fEpilogueBoundary;
	unsigned long long fNumBytesRead;
	unsigned long long fLength;

}
+(id)pathMimeType:(const path*)arg1 ;
-(id)boundary;
-(void)addPart:(id)arg1 withPath:(const path*)arg2 andFilename:(id)arg3 ;
-(void)addPart:(id)arg1 withData:(const vector<std::__1::pair<NSInputStream *, unsigned long>, std::__1::allocator<std::__1::pair<NSInputStream *, unsigned long> > >*)arg2 andFilename:(id)arg3 ;
-(id)createHeaderName:(id)arg1 filename:(id)arg2 mimeType:(id)arg3 ;
-(void)addMultiPart:(const vector<std::__1::pair<NSInputStream *, unsigned long>, std::__1::allocator<std::__1::pair<NSInputStream *, unsigned long> > >*)arg1 withHeader:(const pair<NSInputStream *, unsigned long>*)arg2 ;
-(void)addLength:(unsigned long long)arg1 ;
-(void)addPart:(id)arg1 withPath:(const path*)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS57*)arg3 ;
-(void)_scheduleInCFRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)init;
-(unsigned long long)length;
-(void)close;
-(void)open;
-(unsigned long long)streamStatus;
-(BOOL)hasBytesAvailable;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)streamError;
@end

