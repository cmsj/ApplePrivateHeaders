/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DBaseImageTextureTiling.h>

@interface TSCH3DImageTextureTiling : TSCH3DBaseImageTextureTiling {

	int _mode;
	int _wrap;
	int _face;
	int _xPosition;
	int _yPosition;
	int _sContinuity;
	int _tContinuity;
	char _reveal;

}

@property (assign,nonatomic) int mode;                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int wrap;                     //@synthesize wrap=_wrap - In the implementation block
@property (assign,nonatomic) int face;                     //@synthesize face=_face - In the implementation block
@property (assign,nonatomic) int xposition;                //@synthesize xPosition=_xPosition - In the implementation block
@property (assign,nonatomic) int yposition;                //@synthesize yPosition=_yPosition - In the implementation block
@property (assign,nonatomic) int scontinuity;              //@synthesize sContinuity=_sContinuity - In the implementation block
@property (assign,nonatomic) int tcontinuity;              //@synthesize tContinuity=_tContinuity - In the implementation block
@property (assign,nonatomic) char reveal;                  //@synthesize reveal=_reveal - In the implementation block
+(id)instanceWithArchive:(const Chart3DImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(int)face;
-(void)setFace:(int)arg1 ;
-(int)wrap;
-(void)setWrap:(int)arg1 ;
-(char)reveal;
-(id)initWithArchive:(const Chart3DImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DImageTextureTilingArchive*)arg1 archiver:(id)arg2 ;
-(void)restoreDefault;
-(void)copyFromBaseImageTextureTiling:(id)arg1 ;
-(int)xposition;
-(void)setXposition:(int)arg1 ;
-(int)yposition;
-(void)setYposition:(int)arg1 ;
-(int)scontinuity;
-(void)setScontinuity:(int)arg1 ;
-(int)tcontinuity;
-(void)setTcontinuity:(int)arg1 ;
-(void)setReveal:(char)arg1 ;
@end

