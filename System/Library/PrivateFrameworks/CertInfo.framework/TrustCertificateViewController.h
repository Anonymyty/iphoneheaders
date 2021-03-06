/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UINavigationController.h>

@protocol TrustCertificateViewControllerDelegate;
@class CertificateViewController;

@interface TrustCertificateViewController : UINavigationController {

	id<TrustCertificateViewControllerDelegate> _trustCertificateDelegate;
	CertificateViewController* _certificateViewController;

}

@property (assign,nonatomic,__weak) id<TrustCertificateViewControllerDelegate> trustCertificateDelegate;              //@synthesize trustCertificateDelegate=_trustCertificateDelegate - In the implementation block
@property (nonatomic,retain) CertificateViewController * certificateViewController;                                   //@synthesize certificateViewController=_certificateViewController - In the implementation block
-(void)didReceiveMemoryWarning;
-(void)_cancel;
-(void)setShowCertificateButton:(BOOL)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)_setupNavItem;
-(void)_accept;
-(CertificateViewController *)certificateViewController;
-(id)initWithTrustCertificateDelegate:(id)arg1 ;
-(void)setCertificateInfo:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 isRoot:(BOOL)arg5 properties:(id)arg6 action:(int)arg7 ;
-(id<TrustCertificateViewControllerDelegate>)trustCertificateDelegate;
-(void)setTrustCertificateDelegate:(id<TrustCertificateViewControllerDelegate>)arg1 ;
-(void)setCertificateViewController:(CertificateViewController *)arg1 ;
-(void)_dismissWithResult:(int)arg1 ;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 delegate:(id)arg3 ;
@end

