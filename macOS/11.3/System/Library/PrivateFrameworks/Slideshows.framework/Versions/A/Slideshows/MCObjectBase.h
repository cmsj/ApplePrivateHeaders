/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCObjectBase : NSObject

@property (nonatomic,readonly) char isSnapshot; 
+(void)initialize;
+(void)addStringAttribute:(id)arg1 toXMLElement:(id)arg2 forName:(id)arg3 ;
+(void)addDictionaryElement:(id)arg1 toXMLElement:(id)arg2 forName:(id)arg3 ;
+(void)addDoubleAttribute:(double)arg1 toXMLElement:(id)arg2 forName:(id)arg3 ;
+(void)addFloatAttribute:(float)arg1 toXMLElement:(id)arg2 forName:(id)arg3 ;
+(void)addIntegerAttribute:(long long)arg1 toXMLElement:(id)arg2 forName:(id)arg3 ;
+(void)addArrayElement:(id)arg1 toXMLElement:(id)arg2 forName:(id)arg3 ;
-(void)dealloc;
-(id)snapshot;
-(id)xmlElement;
-(char)isSnapshot;
-(id)imprint;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
@end

