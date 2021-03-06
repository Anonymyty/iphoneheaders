/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/Plugins/MessagesDataKeyboardPlugin.bundle/MessagesDataKeyboardPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol TILinguisticDataSourceMessage <NSObject>
@property (nonatomic,copy,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSString * recipient; 
@property (nonatomic,copy,readonly) NSString * body; 
@property (nonatomic,readonly) BOOL fromMe; 
@optional
-(BOOL)fromMe;

@required
-(NSString *)body;
-(NSDate *)dateSent;
-(NSString *)recipient;

@end

