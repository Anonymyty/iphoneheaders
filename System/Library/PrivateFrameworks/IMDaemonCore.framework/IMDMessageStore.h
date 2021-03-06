/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:15 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSTimer;

@interface IMDMessageStore : NSObject {

	NSString* _modificationStamp;
	NSNumber* _cachedUnreadMessageCount;
	NSNumber* _cachedLastFailedMessageID;
	BOOL _suppressedUpdates;
	BOOL _pendingDBUpdatePost;
	NSTimer* _suppressedUpdatesTimer;

}

@property (retain) NSString * modificationStamp;              //@synthesize modificationStamp=_modificationStamp - In the implementation block
+(id)sharedInstance;
+(void)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 updateLastMessage:(BOOL)arg4 ;
-(void)dealloc;
-(id)init;
-(void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3 ;
-(BOOL)hasStoredMessageWithGUID:(id)arg1 ;
-(long long)lastFailedMessageID;
-(id)messageWithGUID:(id)arg1 ;
-(void)setModificationStamp:(NSString *)arg1 ;
-(void)performInitialHousekeeping;
-(id)_itemsWithGUIDs:(id)arg1 ;
-(void)updateStamp;
-(void)_storeAttachmentsForMessage:(id)arg1 ;
-(void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2 ;
-(BOOL)_hasMessagesWithGUIDs:(id)arg1 ;
-(id)itemWithGUID:(id)arg1 ;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(BOOL)arg5 ;
-(id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(BOOL)arg5 ;
-(id)_unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)_unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)chatForMessageGUID:(id)arg1 ;
-(id)chatsForMessageGUID:(id)arg1 ;
-(id)deleteMessageGUIDs:(id)arg1 ;
-(void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3 ;
-(void)_suppressDBUpdateTimerFired;
-(void)__postDBUpdate;
-(NSString *)modificationStamp;
-(void)postCountChanges;
-(void)_updateModificationDate;
-(void)_postDBUpdate;
-(long long)unreadMessagesCount;
-(void)updateFileTransfer:(id)arg1 ;
-(id)storeItem:(id)arg1 forceReplace:(BOOL)arg2 ;
-(id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5 ;
-(id)messagesWithGUIDs:(id)arg1 ;
-(BOOL)canStoreItem:(id)arg1 onService:(id)arg2 ;
-(BOOL)canStoreMessage:(id)arg1 onService:(id)arg2 ;
-(id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5 ;
-(void)markMessageAsDeduplicated:(id)arg1 ;
-(id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)lastMessageWithHandles:(id)arg1 onServices:(id)arg2 ;
-(id)unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4 ;
-(id)lastMessageWithRoomNames:(id)arg1 onServices:(id)arg2 ;
-(id)attachmentsWithHandles:(id)arg1 onServices:(id)arg2 ;
-(id)attachmentsWithRoomNames:(id)arg1 onServices:(id)arg2 ;
-(id)messageActionItemsForOriginalMessageGUID:(id)arg1 ;
-(id)frequentRepliesForForChatIdentifiers:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)chatForMessage:(id)arg1 ;
-(id)chatsForMessage:(id)arg1 ;
-(void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2 ;
-(id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 ;
-(id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3 ;
-(id)markMessagesAsReadWithHandles:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(id)markMessagesAsReadWithRoomNames:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(id)markMessagesAsReadWithHandle:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(id)markMessagesAsReadWithRoomname:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(BOOL)arg5 ;
-(void)cleanseAttachments;
-(BOOL)isSuppressDatabaseUpdates;
-(void)setSuppressDatabaseUpdates:(BOOL)arg1 ;
-(void)rebuildLastFailedMessageID;
-(void)rebuildUnreadMessageCount;
@end

