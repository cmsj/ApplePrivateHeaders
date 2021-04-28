/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
+(id)layoutsFileName;
+(id)sharedKeyboardFactory;
-(id)init;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
-(id)keyboardPrefixForWidth:(double)arg1 andEdge:(char)arg2 ;
-(void*)layoutsLibraryHandle;
-(NSMutableDictionary *)internalCache;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
@end
