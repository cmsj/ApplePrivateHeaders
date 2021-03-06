/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Assistant/Plugins/AppSync.assistantBundle/Contents/MacOS/AppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AAPPlistEntryInfo : NSObject {

	NSString* _key;
	SEL _setter;
	/*function pointer*/void* _parser;
	/*^block*/id _defaultGenerator;
	/*^block*/id _postProcessor;

}

@property (nonatomic,retain) NSString * key;                                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) SEL setter;                                    //@synthesize setter=_setter - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* parser;              //@synthesize parser=_parser - In the implementation block
@property (nonatomic,copy) id defaultGenerator;                             //@synthesize defaultGenerator=_defaultGenerator - In the implementation block
@property (nonatomic,copy) id postProcessor;                                //@synthesize postProcessor=_postProcessor - In the implementation block
-(id)initWithKey:(id)arg1 setter:(SEL)arg2 parser:(/*function pointer*/void*)arg3 defaultGenerator:(/*^block*/id)arg4 postProcessor:(/*^block*/id)arg5 ;
-(void)setDefaultGenerator:(id)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(SEL)setter;
-(void)setSetter:(SEL)arg1 ;
-(/*function pointer*/void*)parser;
-(void)setParser:(/*function pointer*/void*)arg1 ;
-(id)postProcessor;
-(void)setPostProcessor:(id)arg1 ;
-(id)defaultGenerator;
@end

