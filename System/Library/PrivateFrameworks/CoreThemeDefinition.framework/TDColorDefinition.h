/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class NSDate, NSNumber, NSManagedObject, TDThemeLook, TDColorName;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>

@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (nonatomic,retain) NSNumber * physicalColor; 
@property (nonatomic,retain) NSManagedObject * colorStatus; 
@property (nonatomic,retain) TDThemeLook * look; 
@property (nonatomic,retain) TDColorName * name; 
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)colorAsString;
@end
