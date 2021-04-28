/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/Versions/A/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/CRCameraReaderDelegate.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@class AMSUIWebAppearance, CRCameraReader, AMSUIWebClientContext, AMSUIWebCameraReaderInfoView, AMSUIWebCameraReaderPageModel, NSDictionary, NSString;

@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <CRCameraReaderDelegate, AMSUIWebPagePresenter> {

	AMSUIWebAppearance* _appearance;
	CRCameraReader* _cameraController;
	AMSUIWebClientContext* _context;
	AMSUIWebCameraReaderInfoView* _infoView;
	AMSUIWebCameraReaderPageModel* _model;
	NSDictionary* _output;

}

@property (retain) AMSUIWebAppearance * appearance;                      //@synthesize appearance=_appearance - In the implementation block
@property (retain) CRCameraReader * cameraController;                    //@synthesize cameraController=_cameraController - In the implementation block
@property (retain) AMSUIWebClientContext * context;                      //@synthesize context=_context - In the implementation block
@property (retain) AMSUIWebCameraReaderInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
@property (retain) AMSUIWebCameraReaderPageModel * model;                //@synthesize model=_model - In the implementation block
@property (retain) NSDictionary * output;                                //@synthesize output=_output - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)cameraSupported;
-(id)initWithContext:(id)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(AMSUIWebAppearance *)appearance;
-(void)loadView;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(AMSUIWebCameraReaderPageModel *)model;
-(void)setModel:(AMSUIWebCameraReaderPageModel *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(NSDictionary *)output;
-(void)setOutput:(NSDictionary *)arg1 ;
-(void)cameraReaderDidCancel:(id)arg1 ;
-(void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2 ;
-(void)cameraReaderDidEnd:(id)arg1 ;
-(void)cameraReader:(id)arg1 didFailWithError:(id)arg2 ;
-(CRCameraReader *)cameraController;
-(void)_applyAppearance;
-(void)_setupPageForCreditCard;
-(void)_setupPageForGiftCard;
-(void)_layoutPageForCreditCard;
-(void)_layoutPageForGiftCard;
-(void)_handleCameraOutput:(id)arg1 error:(id)arg2 ;
-(id)_outputForCreditCardReaderObjects:(id)arg1 ;
-(AMSUIWebCameraReaderInfoView *)infoView;
-(void)setInfoView:(AMSUIWebCameraReaderInfoView *)arg1 ;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
-(id)_outputForGiftCardReaderObjects:(id)arg1 ;
-(void)setCameraController:(CRCameraReader *)arg1 ;
@end
