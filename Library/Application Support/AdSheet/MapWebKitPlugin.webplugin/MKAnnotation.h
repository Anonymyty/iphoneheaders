/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:43 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) SCD_Struct_Ma0 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(NSString *)title;
-(NSString *)subtitle;
-(void)setCoordinate:(SCD_Struct_Ma0)arg1;

@required
-(SCD_Struct_Ma0)coordinate;

@end

