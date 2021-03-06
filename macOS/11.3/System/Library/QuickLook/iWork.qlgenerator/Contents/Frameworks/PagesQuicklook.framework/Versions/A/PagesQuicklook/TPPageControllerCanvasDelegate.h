/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/TSDCanvasDelegate.h>

@class TPDocumentRoot, TSDCanvas, NSString;

@interface TPPageControllerCanvasDelegate : NSObject <TSDCanvasDelegate> {

	TPDocumentRoot* _documentRoot;
	TSDCanvas* _canvas;

}

@property (nonatomic,readonly) TSDCanvas * canvas;                                          //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,readonly) id<TSDCanvasProxyDelegate> canvasProxyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tearDown;
-(TSDCanvas *)canvas;
-(id)documentRoot;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(char)shouldShowInstructionalTextForLayout:(id)arg1 ;
-(char)wantsEditingLayoutsForOffscreenInfos;
-(char)textLayoutMustIncludeAdornments;
-(id)initWithDocumentRoot:(id)arg1 canvas:(id)arg2 ;
@end

