/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VisualAlerts.bundle/VisualAlerts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisualAlerts/AXCameraTorchManager.h>

@class AVCaptureDevice, NSString;

@interface AXSystemCameraTorchManager : NSObject <AXCameraTorchManager> {

	AVCaptureDevice* _captureDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)openTorchDevice;
-(void)closeTorchDevice;
-(void)turnTorchOn;
-(void)turnTorchOff;
@end
