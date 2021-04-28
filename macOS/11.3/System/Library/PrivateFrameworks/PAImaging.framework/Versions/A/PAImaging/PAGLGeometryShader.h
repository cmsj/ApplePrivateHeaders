/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PAImaging/PAGLShader.h>

@interface PAGLGeometryShader : PAGLShader {

	unsigned _inputType;
	unsigned _outputType;
	unsigned _outVertexCount;

}

@property (assign,nonatomic) unsigned inputType;                   //@synthesize inputType=_inputType - In the implementation block
@property (assign,nonatomic) unsigned outputType;                  //@synthesize outputType=_outputType - In the implementation block
@property (assign,nonatomic) unsigned outVertexCount;              //@synthesize outVertexCount=_outVertexCount - In the implementation block
+(unsigned)_maxOutVertexCount;
+(unsigned)maxOutVertexCount;
-(id)initWithDevice:(id)arg1 ;
-(unsigned)outputType;
-(unsigned)inputType;
-(void)setOutputType:(unsigned)arg1 ;
-(void)setInputType:(unsigned)arg1 ;
-(unsigned)outVertexCount;
-(void)setOutVertexCount:(unsigned)arg1 ;
@end
