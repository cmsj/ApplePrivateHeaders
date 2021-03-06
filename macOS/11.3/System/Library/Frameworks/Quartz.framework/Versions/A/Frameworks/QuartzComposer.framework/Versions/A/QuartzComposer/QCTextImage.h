/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCPatch.h>

@class QCStringPort, QCNumberPort, QCImagePort, QCIndexPort, QCTextRenderer;

@interface QCTextImage : QCPatch {

	QCStringPort* inputString;
	QCStringPort* inputFontName;
	QCNumberPort* inputGlyphSize;
	QCNumberPort* inputLeading;
	QCNumberPort* inputKerning;
	QCNumberPort* inputWidth;
	QCNumberPort* inputHeight;
	QCImagePort* outputImage;
	QCNumberPort* outputWidth;
	QCNumberPort* outputHeight;
	QCIndexPort* outputLineCount;
	QCIndexPort* outputGlyphCount;
	char _pixelUnits;
	QCTextRenderer* _renderer;
	unsigned _target;
	unsigned long long _mipmapLevels;

}
+(unsigned long long)stateVersionWithIdentifier:(id)arg1 ;
+(char)isSafe;
+(char)allowsSubpatchesWithIdentifier:(id)arg1 ;
+(id)serializedStateKeysWithIdentifier:(id)arg1 ;
+(id)stateKeysWithIdentifier:(id)arg1 ;
+(Class)inspectorClassWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)state;
-(id)initWithIdentifier:(id)arg1 ;
-(char)setState:(id)arg1 ;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setHorizontalAlignment:(int)arg1 ;
-(int)horizontalAlignment;
-(void)setFontName:(id)arg1 ;
-(char)setup:(id)arg1 ;
-(char)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3 ;
-(void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3 ;
-(char)usePixels;
-(void)setUsePixels:(char)arg1 ;
@end

