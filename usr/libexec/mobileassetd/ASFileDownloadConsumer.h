/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/mobileassetd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mobileassetd/ASDownloadConsumer.h>

@interface ASFileDownloadConsumer : ASDownloadConsumer {

	int _fd;

}
-(void)resumeAtOffset:(long long)arg1 ;
-(BOOL)consumeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_openOutputFile;
-(void)dealloc;
-(void)suspend;
-(id)initWithURL:(id)arg1 ;
-(void)finish;
@end
