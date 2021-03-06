/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSString, NSURL, NSSet;

@interface EKPersistentCalendar : EKPersistentObject

@property (nonatomic,retain) EKPersistentSource * source; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,nonatomic) int displayOrder; 
@property (nonatomic,copy) NSString * colorString; 
@property (assign,getter=isColorDisplayOnly,nonatomic) BOOL colorDisplayOnly; 
@property (nonatomic,copy) NSString * symbolicColorName; 
@property (assign,nonatomic) unsigned long long allowedEntityTypes; 
@property (assign,nonatomic) BOOL allowsContentModifications; 
@property (assign,nonatomic) BOOL prohibitsScheduling; 
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isImmutable,nonatomic) BOOL immutable; 
@property (assign,getter=isSharingInvitation,nonatomic) BOOL sharingInvitation; 
@property (assign,nonatomic) BOOL canBePublished; 
@property (assign,nonatomic) BOOL canBeShared; 
@property (assign,nonatomic) BOOL schedulingProhibited; 
@property (assign,nonatomic) BOOL isFacebookBirthdayCalendar; 
@property (assign,nonatomic) BOOL isHolidaySubscribedCalendar; 
@property (assign,nonatomic) BOOL isFamilyCalendar; 
@property (assign,nonatomic) BOOL isMarkedUndeletable; 
@property (assign,nonatomic) BOOL isMarkedImmutableSharees; 
@property (assign,nonatomic) BOOL isIgnoringEventAlerts; 
@property (assign,nonatomic) BOOL isIgnoringSharedCalendarNotifications; 
@property (nonatomic,readonly) BOOL isSuggestionsCalendar; 
@property (nonatomic,readonly) BOOL isMutableSuggestionsCalendar; 
@property (nonatomic,readonly) BOOL isDefaultCalendarForSource; 
@property (assign,nonatomic) unsigned long long sharingStatus; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,copy) NSString * sharedOwnerName; 
@property (nonatomic,copy) NSURL * sharedOwnerAddress; 
@property (assign,nonatomic) unsigned long long sharingInvitationResponse; 
@property (nonatomic,copy) NSSet * sharees; 
@property (nonatomic,copy) NSString * publishedURL; 
@property (assign,getter=isPublished,nonatomic) BOOL published; 
@property (nonatomic,copy) NSString * selfIdentityDisplayName; 
@property (nonatomic,copy) NSString * selfIdentityEmail; 
@property (nonatomic,copy) NSURL * selfIdentityAddress; 
@property (nonatomic,copy) NSString * selfIdentityFirstName; 
@property (nonatomic,copy) NSString * selfIdentityLastName; 
@property (nonatomic,copy) NSString * ownerIdentityDisplayName; 
@property (nonatomic,copy) NSString * ownerIdentityEmail; 
@property (nonatomic,copy) NSURL * ownerIdentityAddress; 
@property (nonatomic,copy) NSString * ownerIdentityFirstName; 
@property (nonatomic,copy) NSString * ownerIdentityLastName; 
@property (nonatomic,copy) NSString * bulkRequests; 
@property (nonatomic,copy) NSString * subcalAccountID; 
@property (nonatomic,copy) NSString * pushKey; 
+(id)calendar;
+(id)defaultPropertiesToLoad;
+(id)relations;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setSource:(EKPersistentSource *)arg1 ;
-(EKPersistentSource *)source;
-(NSString *)title;
-(NSString *)UUID;
-(int)entityType;
-(void)setSubscribed:(BOOL)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(BOOL)isColorDisplayOnly;
-(void)setColorDisplayOnly:(BOOL)arg1 ;
-(NSString *)symbolicColorName;
-(void)setColorString:(NSString *)arg1 ;
-(void)setAllowsContentModifications:(BOOL)arg1 ;
-(BOOL)prohibitsScheduling;
-(void)setProhibitsScheduling:(BOOL)arg1 ;
-(void)setImmutable:(BOOL)arg1 ;
-(void)setSharingInvitation:(BOOL)arg1 ;
-(void)setCanBePublished:(BOOL)arg1 ;
-(void)setCanBeShared:(BOOL)arg1 ;
-(void)setSchedulingProhibited:(BOOL)arg1 ;
-(void)setIsFacebookBirthdayCalendar:(BOOL)arg1 ;
-(void)setIsHolidaySubscribedCalendar:(BOOL)arg1 ;
-(void)setIsFamilyCalendar:(BOOL)arg1 ;
-(void)setIsMarkedUndeletable:(BOOL)arg1 ;
-(void)setIsMarkedImmutableSharees:(BOOL)arg1 ;
-(BOOL)isMutableSuggestionsCalendar;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(void)setSharedOwnerAddress:(NSURL *)arg1 ;
-(unsigned long long)sharingInvitationResponse;
-(void)setSharingInvitationResponse:(unsigned long long)arg1 ;
-(void)setPublishedURL:(NSString *)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(NSString *)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(NSString *)arg1 ;
-(void)setSelfIdentityEmail:(NSString *)arg1 ;
-(NSURL *)selfIdentityAddress;
-(void)setSelfIdentityAddress:(NSURL *)arg1 ;
-(NSString *)selfIdentityFirstName;
-(void)setSelfIdentityFirstName:(NSString *)arg1 ;
-(NSString *)selfIdentityLastName;
-(void)setSelfIdentityLastName:(NSString *)arg1 ;
-(NSString *)ownerIdentityDisplayName;
-(void)setOwnerIdentityDisplayName:(NSString *)arg1 ;
-(NSString *)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(NSString *)arg1 ;
-(NSURL *)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(NSURL *)arg1 ;
-(NSString *)ownerIdentityFirstName;
-(void)setOwnerIdentityFirstName:(NSString *)arg1 ;
-(NSString *)ownerIdentityLastName;
-(void)setOwnerIdentityLastName:(NSString *)arg1 ;
-(NSString *)bulkRequests;
-(void)setBulkRequests:(NSString *)arg1 ;
-(NSString *)subcalAccountID;
-(void)setSubcalAccountID:(NSString *)arg1 ;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(id)digest;
-(void)setDigest:(id)arg1 ;
-(BOOL)hasAlarms;
-(void)setUUID:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(BOOL)isIgnoringEventAlerts;
-(BOOL)isFamilyCalendar;
-(unsigned long long)sharingStatus;
-(NSString *)sharedOwnerName;
-(NSSet *)sharees;
-(BOOL)canBeShared;
-(void)setSharees:(NSSet *)arg1 ;
-(BOOL)isMarkedImmutableSharees;
-(void)removeSharee:(id)arg1 ;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(void)addSharee:(id)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(BOOL)isHolidaySubscribedCalendar;
-(BOOL)isMarkedUndeletable;
-(BOOL)isSubscribed;
-(void)setDisplayOrder:(int)arg1 ;
-(BOOL)schedulingProhibited;
-(BOOL)isDefaultCalendarForSource;
-(NSURL *)sharedOwnerAddress;
-(id)alarms;
-(void)setAlarms:(id)arg1 ;
-(void)addAlarm:(id)arg1 ;
-(BOOL)isSuggestionsCalendar;
-(BOOL)isFacebookBirthdayCalendar;
-(BOOL)isSharingInvitation;
-(int)displayOrder;
-(void)setSymbolicColorName:(NSString *)arg1 ;
-(void)removeAlarm:(id)arg1 ;
-(BOOL)allowsContentModifications;
-(void)setIsIgnoringSharedCalendarNotifications:(BOOL)arg1 ;
-(BOOL)isIgnoringSharedCalendarNotifications;
-(void)setIsIgnoringEventAlerts:(BOOL)arg1 ;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(NSString *)selfIdentityEmail;
-(BOOL)isPublished;
-(NSString *)publishedURL;
-(void)setPublished:(BOOL)arg1 ;
-(BOOL)canBePublished;
-(void)setIsPublished:(BOOL)arg1 ;
-(BOOL)isImmutable;
-(BOOL)validate:(id*)arg1 ;
-(NSString *)colorString;
@end

