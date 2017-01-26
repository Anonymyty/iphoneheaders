/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:58:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDOMAccessibilityProperties : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL exists; 
@property (nonatomic,copy) NSString * label; 
@property (assign,nonatomic) int nodeId; 
@property (nonatomic,copy) NSString * role; 
@property (assign,nonatomic) int activeDescendantNodeId; 
@property (assign,nonatomic) BOOL busy; 
@property (assign,nonatomic) long long checked; 
@property (nonatomic,copy) NSArray * childNodeIds; 
@property (nonatomic,copy) NSArray * controlledNodeIds; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL expanded; 
@property (nonatomic,copy) NSArray * flowedNodeIds; 
@property (assign,nonatomic) BOOL focused; 
@property (assign,nonatomic) BOOL ignored; 
@property (assign,nonatomic) BOOL ignoredByDefault; 
@property (assign,nonatomic) long long invalid; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL liveRegionAtomic; 
@property (nonatomic,copy) NSArray * liveRegionRelevant; 
@property (assign,nonatomic) long long liveRegionStatus; 
@property (assign,nonatomic) int mouseEventNodeId; 
@property (nonatomic,copy) NSArray * ownedNodeIds; 
@property (assign,nonatomic) int parentNodeId; 
@property (assign,nonatomic) BOOL pressed; 
@property (assign,nonatomic) BOOL readonly; 
@property (assign,nonatomic) BOOL required; 
@property (assign,nonatomic) BOOL selected; 
@property (nonatomic,copy) NSArray * selectedChildNodeIds; 
-(BOOL)required;
-(void)setHidden:(BOOL)arg1 ;
-(void)setChecked:(long long)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)pressed;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)selected;
-(long long)checked;
-(BOOL)hidden;
-(BOOL)busy;
-(void)setRole:(NSString *)arg1 ;
-(NSString *)role;
-(BOOL)ignored;
-(void)setIgnored:(BOOL)arg1 ;
-(void)setNodeId:(int)arg1 ;
-(int)nodeId;
-(id)initWithExists:(BOOL)arg1 label:(id)arg2 nodeId:(int)arg3 role:(id)arg4 ;
-(void)setActiveDescendantNodeId:(int)arg1 ;
-(int)activeDescendantNodeId;
-(void)setChildNodeIds:(NSArray *)arg1 ;
-(NSArray *)childNodeIds;
-(void)setControlledNodeIds:(NSArray *)arg1 ;
-(NSArray *)controlledNodeIds;
-(void)setFlowedNodeIds:(NSArray *)arg1 ;
-(NSArray *)flowedNodeIds;
-(void)setFocused:(BOOL)arg1 ;
-(void)setIgnoredByDefault:(BOOL)arg1 ;
-(BOOL)ignoredByDefault;
-(void)setLiveRegionAtomic:(BOOL)arg1 ;
-(BOOL)liveRegionAtomic;
-(void)setLiveRegionRelevant:(NSArray *)arg1 ;
-(NSArray *)liveRegionRelevant;
-(void)setLiveRegionStatus:(long long)arg1 ;
-(long long)liveRegionStatus;
-(void)setMouseEventNodeId:(int)arg1 ;
-(int)mouseEventNodeId;
-(void)setOwnedNodeIds:(NSArray *)arg1 ;
-(NSArray *)ownedNodeIds;
-(void)setParentNodeId:(int)arg1 ;
-(int)parentNodeId;
-(void)setSelectedChildNodeIds:(NSArray *)arg1 ;
-(NSArray *)selectedChildNodeIds;
-(void)setRequired:(BOOL)arg1 ;
-(void)setExists:(BOOL)arg1 ;
-(BOOL)exists;
-(void)setBusy:(BOOL)arg1 ;
-(BOOL)readonly;
-(void)setReadonly:(BOOL)arg1 ;
-(void)setInvalid:(long long)arg1 ;
-(long long)invalid;
-(BOOL)focused;
@end
