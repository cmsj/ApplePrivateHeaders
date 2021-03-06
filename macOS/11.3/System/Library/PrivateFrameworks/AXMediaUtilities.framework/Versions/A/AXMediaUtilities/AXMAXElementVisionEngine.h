/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMVisionEngine.h>

@class AXMScreenCaptureNode, AXMImageNode, AXMTextDetectorNode, AXMIconClassDetectorNode;

@interface AXMAXElementVisionEngine : AXMVisionEngine {

	AXMScreenCaptureNode* _captureNode;
	AXMImageNode* _imageNode;
	AXMTextDetectorNode* _textDetector;
	AXMIconClassDetectorNode* _iconClassDetector;

}

@property (assign,nonatomic,__weak) AXMScreenCaptureNode * captureNode;                        //@synthesize captureNode=_captureNode - In the implementation block
@property (assign,nonatomic,__weak) AXMImageNode * imageNode;                                  //@synthesize imageNode=_imageNode - In the implementation block
@property (assign,nonatomic,__weak) AXMTextDetectorNode * textDetector;                        //@synthesize textDetector=_textDetector - In the implementation block
@property (assign,nonatomic,__weak) AXMIconClassDetectorNode * iconClassDetector;              //@synthesize iconClassDetector=_iconClassDetector - In the implementation block
-(id)initWithIdentifier:(id)arg1 ;
-(void)setImageNode:(AXMImageNode *)arg1 ;
-(void)setIconClassDetector:(AXMIconClassDetectorNode *)arg1 ;
-(AXMImageNode *)imageNode;
-(AXMIconClassDetectorNode *)iconClassDetector;
-(void)setCaptureNode:(AXMScreenCaptureNode *)arg1 ;
-(void)setTextDetector:(AXMTextDetectorNode *)arg1 ;
-(AXMScreenCaptureNode *)captureNode;
-(AXMTextDetectorNode *)textDetector;
@end

