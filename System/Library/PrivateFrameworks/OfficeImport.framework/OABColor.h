/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABColor : NSObject
+(int)readSystemColorID:(int)arg1 ;
+(EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2 ;
+(int)readColorAdjustmentType:(int)arg1 ;
+(id)readColor:(const EshColor*)arg1 colorPropertiesManager:(id)arg2 state:(id)arg3 ;
+(int)writeSystemColorID:(int)arg1 ;
@end
