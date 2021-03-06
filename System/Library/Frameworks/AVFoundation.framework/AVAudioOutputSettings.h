/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings

@property (nonatomic,readonly) NSDictionary * audioSettingsDictionary; 
+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)registeredOutputSettingsClasses;
+(id)defaultAudioOutputSettings;
+(id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 ;
+(id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1 ;
+(id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1 ;
-(id)compatibleMediaTypes;
-(NSDictionary *)audioSettingsDictionary;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2 ;
-(id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

