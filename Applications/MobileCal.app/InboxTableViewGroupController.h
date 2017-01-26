/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol InboxTableViewGroupController <NSObject>
@optional
-(void)dismissAll;

@required
-(void)refreshIfNeeded;
-(id)eventForRow:(long long)arg1;
-(id)initWithModel:(id)arg1 delegate:(id)arg2;
-(BOOL)hasRows;
-(void)rowSelected:(long long)arg1;
-(long long)numberOfRows;
-(void)setVisible:(BOOL)arg1;
-(BOOL)canSelectRow:(long long)arg1;
-(double)estimatedHeightForRow:(long long)arg1;
-(id)titleForHeader;
-(id)cellForRow:(long long)arg1;

@end
