/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADBlipCollection : NSObject {

	NSMutableArray* mBlips;

}

@property (nonatomic,retain) NSMutableArray * blips; 
-(void)dealloc;
-(id)init;
-(NSMutableArray *)blips;
-(id)blipAtIndex:(int)arg1 ;
-(unsigned)addBlip:(id)arg1 ;
-(unsigned)blipCount;
-(void)setBlips:(NSMutableArray *)arg1 ;
@end
