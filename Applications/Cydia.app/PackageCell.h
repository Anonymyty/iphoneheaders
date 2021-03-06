/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:01:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/CyteTableViewCell.h>
#import <Cydia/CyteTableViewCellDelegate.h>

@interface PackageCell : CyteTableViewCell <CyteTableViewCellDelegate> {

	MenesObjectHandle<UIImage, 0> icon_;
	MenesObjectHandle<NSString, 0> name_;
	MenesObjectHandle<NSString, 0> description_;
	BOOL commercial_;
	MenesObjectHandle<NSString, 0> source_;
	MenesObjectHandle<UIImage, 0> badge_;
	MenesObjectHandle<UIImage, 0> placard_;
	BOOL summarized_;

}
-(void)drawContentRect:(CGRect)arg1 ;
-(void)drawSummaryContentRect:(CGRect)arg1 ;
-(void)drawNormalContentRect:(CGRect)arg1 ;
-(void)setPackage:(id)arg1 asSummary:(BOOL)arg2 ;
-(id)init;
-(id)accessibilityLabel;
@end

