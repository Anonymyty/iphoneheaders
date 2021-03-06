/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMDMessage : NSObject {

	BOOL _showMessage;
	BOOL _playSound;
	BOOL _vibrate;
	BOOL _showMsgInLockScreen;
	BOOL _dismissMsgOnUnlock;
	BOOL _dismissMsgOnLock;
	BOOL _isHighPrioritySound;
	BOOL _isFmipSound;
	int _soundDuration;
	NSString* _msgTitle;
	NSString* _msgText;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	/*^block*/id _defaultButtonAction;
	/*^block*/id _alternateButtonAction;
	double _timeout;
	NSString* _soundName;

}

@property (assign,nonatomic) BOOL showMessage;                             //@synthesize showMessage=_showMessage - In the implementation block
@property (assign,nonatomic) BOOL playSound;                               //@synthesize playSound=_playSound - In the implementation block
@property (assign,nonatomic) BOOL vibrate;                                 //@synthesize vibrate=_vibrate - In the implementation block
@property (nonatomic,retain) NSString * msgTitle;                          //@synthesize msgTitle=_msgTitle - In the implementation block
@property (nonatomic,retain) NSString * msgText;                           //@synthesize msgText=_msgText - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonTitle;                //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * alternateButtonTitle;              //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (nonatomic,copy) id defaultButtonAction;                         //@synthesize defaultButtonAction=_defaultButtonAction - In the implementation block
@property (nonatomic,copy) id alternateButtonAction;                       //@synthesize alternateButtonAction=_alternateButtonAction - In the implementation block
@property (assign,nonatomic) double timeout;                               //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL showMsgInLockScreen;                     //@synthesize showMsgInLockScreen=_showMsgInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL dismissMsgOnUnlock;                      //@synthesize dismissMsgOnUnlock=_dismissMsgOnUnlock - In the implementation block
@property (assign,nonatomic) BOOL dismissMsgOnLock;                        //@synthesize dismissMsgOnLock=_dismissMsgOnLock - In the implementation block
@property (nonatomic,retain) NSString * soundName;                         //@synthesize soundName=_soundName - In the implementation block
@property (assign,nonatomic) int soundDuration;                            //@synthesize soundDuration=_soundDuration - In the implementation block
@property (assign,nonatomic) BOOL isHighPrioritySound;                     //@synthesize isHighPrioritySound=_isHighPrioritySound - In the implementation block
@property (assign,nonatomic) BOOL isFmipSound;                             //@synthesize isFmipSound=_isFmipSound - In the implementation block
+(void)stopAllSounds;
-(BOOL)showMessage;
-(int)soundDuration;
-(BOOL)vibrate;
-(void)setShowMessage:(BOOL)arg1 ;
-(void)setPlaySound:(BOOL)arg1 ;
-(void)setSoundDuration:(int)arg1 ;
-(void)setIsHighPrioritySound:(BOOL)arg1 ;
-(void)setIsFmipSound:(BOOL)arg1 ;
-(void)setVibrate:(BOOL)arg1 ;
-(BOOL)isHighPrioritySound;
-(BOOL)isFmipSound;
-(void)activate;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)soundName;
-(void)setTimeout:(double)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)setMsgTitle:(NSString *)arg1 ;
-(void)setMsgText:(NSString *)arg1 ;
-(void)setShowMsgInLockScreen:(BOOL)arg1 ;
-(void)setDismissMsgOnUnlock:(BOOL)arg1 ;
-(void)setDismissMsgOnLock:(BOOL)arg1 ;
-(void)setDefaultButtonAction:(id)arg1 ;
-(void)setAlternateButtonAction:(id)arg1 ;
-(double)timeout;
-(NSString *)defaultButtonTitle;
-(NSString *)msgText;
-(NSString *)msgTitle;
-(BOOL)showMsgInLockScreen;
-(BOOL)dismissMsgOnUnlock;
-(BOOL)dismissMsgOnLock;
-(id)defaultButtonAction;
-(id)alternateButtonAction;
-(BOOL)playSound;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
@end

