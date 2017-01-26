/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class WiFiNetwork;

@interface CheckableTableCell : PSTableCell {

	WiFiNetwork* _network;

}

@property (nonatomic,retain) WiFiNetwork * network;              //@synthesize network=_network - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(WiFiNetwork *)network;
-(void)setNetwork:(WiFiNetwork *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
