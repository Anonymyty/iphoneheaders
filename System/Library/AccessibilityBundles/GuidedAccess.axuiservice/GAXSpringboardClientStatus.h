/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface GAXSpringboardClientStatus : NSObject {

	NSString* _sessionApplicationName;
	NSData* _archivedSessionApplicationIcon;

}

@property (nonatomic,retain) NSString * sessionApplicationName;                    //@synthesize sessionApplicationName=_sessionApplicationName - In the implementation block
@property (nonatomic,retain) NSData * archivedSessionApplicationIcon;              //@synthesize archivedSessionApplicationIcon=_archivedSessionApplicationIcon - In the implementation block
-(void)setSessionApplicationName:(NSString *)arg1 ;
-(NSString *)sessionApplicationName;
-(NSData *)archivedSessionApplicationIcon;
-(void)setArchivedSessionApplicationIcon:(NSData *)arg1 ;
-(void)dealloc;
-(id)description;
@end

