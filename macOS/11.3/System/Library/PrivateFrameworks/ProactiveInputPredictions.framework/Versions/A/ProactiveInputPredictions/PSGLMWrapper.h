/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/Versions/A/ProactiveInputPredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSGLMWrapper : NSObject {

	void* _langModel;
	void* _lexicon;

}

@property (nonatomic,readonly) void* langModel;              //@synthesize langModel=_langModel - In the implementation block
@property (nonatomic,readonly) void* lexicon;                //@synthesize lexicon=_lexicon - In the implementation block
-(void)dealloc;
-(void*)lexicon;
-(void*)langModel;
-(id)initWithLangModel:(void*)arg1 lexicon:(void*)arg2 ;
@end

