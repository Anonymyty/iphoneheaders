/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPasteboardControl.h>

@protocol ABStyleProvider, ABPersonImageDataDelegate;
@class UIImageView, ABClippingImageView, UIImage, ABUIPerson;

@interface ABPersonImageView : ABPasteboardControl {

	UIImageView* _personImageView;
	UIImageView* _editingImageView;
	ABClippingImageView* _emptyImageView;
	ABClippingImageView* _pasteboardMaskImageView;
	UIImage* _personImage;
	BOOL _isEditing;
	BOOL _showLabel;
	BOOL _needsReflow;
	BOOL _needsReload;
	BOOL _allowsEditing;
	BOOL _multiplePhotoBackdropEnabled;
	ABUIPerson* _displayedPerson;
	id<ABStyleProvider> _styleProvider;
	id<ABPersonImageDataDelegate> _imageDataDelegate;

}

@property (nonatomic,retain) ABUIPerson * displayedPerson;                                 //@synthesize displayedPerson=_displayedPerson - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                           //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL multiplePhotoBackdropEnabled;                            //@synthesize multiplePhotoBackdropEnabled=_multiplePhotoBackdropEnabled - In the implementation block
@property (assign,nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;              //@synthesize imageDataDelegate=_imageDataDelegate - In the implementation block
@property (nonatomic,readonly) UIImage * maskImage; 
@property (nonatomic,readonly) UIImage * backgroundImage; 
@property (nonatomic,readonly) UIImage * overlayImage; 
@property (nonatomic,readonly) UIImage * attributionImage; 
+(id)newImageWithName:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reload;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIImage *)backgroundImage;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(ABUIPerson *)displayedPerson;
-(id)personImageView;
-(void)setImageDataDelegate:(id<ABPersonImageDataDelegate>)arg1 ;
-(id<ABPersonImageDataDelegate>)imageDataDelegate;
-(void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2 ;
-(BOOL)abShouldShowMenu;
-(void)abMenuControllerWillShow:(id)arg1 ;
-(void)abMenuControllerWillHide;
-(UIImage *)maskImage;
-(UIImage *)overlayImage;
-(UIImage *)attributionImage;
-(void)_drawEditLabelInFrame:(CGRect)arg1 ;
-(id)editingImageView;
-(id)framedPhoto;
-(id)emptyImageView;
-(void)reflowIfNeeded;
-(id)copyDefaultImageForPerson:(id)arg1 ;
-(void)setNeedsReflow;
-(id)pasteboardMaskImageView;
-(id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1 ;
-(id)_newDictionaryWithImageData;
-(void)setMultiplePhotoBackdropEnabled:(BOOL)arg1 ;
-(BOOL)multiplePhotoBackdropEnabled;
-(id<ABStyleProvider>)styleProvider;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)reflow;
-(void)setDisplayedPerson:(ABUIPerson *)arg1 ;
-(void)setNeedsReload;
-(void)reloadIfNeeded;
@end

