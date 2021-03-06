/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MSCLAudioPickerSourceViewController;
@class UIImage, NSString, UIViewController;

@interface MSCLAudioPickerSource : NSObject <NSCopying> {

	UIImage* _icon;
	NSString* _title;
	UIViewController*<MSCLAudioPickerSourceViewController> _viewController;

}

@property (nonatomic,copy) UIImage * icon;                                                                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIViewController*<MSCLAudioPickerSourceViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewController:(UIViewController*<MSCLAudioPickerSourceViewController>)arg1 ;
-(UIViewController*<MSCLAudioPickerSourceViewController>)viewController;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
@end

