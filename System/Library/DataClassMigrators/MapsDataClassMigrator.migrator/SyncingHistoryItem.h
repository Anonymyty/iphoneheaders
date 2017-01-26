/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SyncingHistoryItem <NSObject,NSCopying,MapsSynced>
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) double position; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@required
-(void)setSyncIdentifier:(id)arg1;
-(BOOL)isValid;
-(void)setPosition:(double)arg1;
-(double)position;
-(NSString *)syncIdentifier;

@end
