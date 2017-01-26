/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface AFBulletin : NSObject <NSSecureCoding> {

	BOOL _read;
	BOOL _allDay;
	NSString* _bulletinID;
	NSString* _recordID;
	NSDate* _date;
	NSDate* _endDate;
	NSString* _message;
	NSString* _modalAlertContentMessage;
	NSDate* _recencyDate;
	NSString* _sectionID;
	long long _sectionSubtype;
	NSString* _subtitle;
	NSString* _timeZone;
	NSString* _title;
	NSString* _displayName;

}

@property (assign,getter=isRead,nonatomic) BOOL read;                                 //@synthesize read=_read - In the implementation block
@property (nonatomic,copy,readonly) NSString * bulletinID;                            //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordID;                              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (getter=isAllDay,nonatomic,readonly) BOOL allDay;                           //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * modalAlertContentMessage;              //@synthesize modalAlertContentMessage=_modalAlertContentMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDate * recencyDate;                             //@synthesize recencyDate=_recencyDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,readonly) long long sectionSubtype;                              //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeZone;                              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSDate *)date;
-(NSString *)subtitle;
-(NSString *)message;
-(NSString *)timeZone;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSDate *)recencyDate;
-(NSString *)modalAlertContentMessage;
-(NSString *)recordID;
-(NSString *)bulletinID;
-(long long)sectionSubtype;
-(void)setRead:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(NSDate *)endDate;
-(BOOL)isRead;
-(void)setBulletin:(id)arg1 ;
-(NSString *)sectionID;
@end
