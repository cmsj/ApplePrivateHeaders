/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAMLWriterDelegate.h>

@class NSString, NSDictionary;

@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate> {

	NSString* _resourceDir;
	int _serial;
	NSString* _imageFormat;
	NSDictionary* _imageEncodeOptions;
	char _skipHiddenLayers;

}

@property (copy) NSString * imageFormat;                            //@synthesize imageFormat=_imageFormat - In the implementation block
@property (copy) NSDictionary * imageEncodeOptions;                 //@synthesize imageEncodeOptions=_imageEncodeOptions - In the implementation block
@property (assign) char skipHiddenLayers;                           //@synthesize skipHiddenLayers=_skipHiddenLayers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)imageEncodeOptions;
-(char)skipHiddenLayers;
-(id)CAMLWriter:(id)arg1 typeForObject:(id)arg2 ;
-(id)CAMLWriter:(id)arg1 URLForResource:(id)arg2 ;
-(BOOL)CAMLWriter:(id)arg1 shouldEncodeObject:(id)arg2 ;
-(id)initWithResourceDir:(id)arg1 ;
-(void)setImageEncodeOptions:(NSDictionary *)arg1 ;
-(void)setSkipHiddenLayers:(char)arg1 ;
-(void)dealloc;
-(NSString *)imageFormat;
-(void)setImageFormat:(NSString *)arg1 ;
@end
