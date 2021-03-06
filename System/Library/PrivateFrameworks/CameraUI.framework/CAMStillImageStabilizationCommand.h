/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStillImageStabilizationCommand : CAMCaptureCommand {

	BOOL __stabilizationEnabled;

}

@property (getter=_isStabilizationEnabled,nonatomic,readonly) BOOL _stabilizationEnabled;              //@synthesize _stabilizationEnabled=__stabilizationEnabled - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(id)initWithStabilizationEnabled:(BOOL)arg1 ;
-(BOOL)_isStabilizationEnabled;
@end

