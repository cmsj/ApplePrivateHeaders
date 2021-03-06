/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString, CUIRenditionKey, CUIThemeRendition;

@interface CUINamedLookup : NSObject <NSLocking> {

	NSString* _name;
	CUIRenditionKey* _key;
	NSString* _signature;
	unsigned long long _storageRef;
	unsigned _distilledInVersion;
	os_unfair_lock_s _lock;
	unsigned _odContent : 1;

}

@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) CUIRenditionKey * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) unsigned long long storageRef;                 //@synthesize storageRef=_storageRef - In the implementation block
@property (nonatomic,readonly) CUIThemeRendition * _rendition; 
@property (nonatomic,readonly) CUIRenditionKey * renditionKey; 
@property (nonatomic,readonly) NSString * renditionName; 
@property (nonatomic,readonly) NSString * keySignature; 
@property (nonatomic,readonly) char _cacheRenditionProperties; 
@property (nonatomic,readonly) unsigned _distilledInVersion; 
@property (nonatomic,readonly) unsigned long long subtype; 
@property (nonatomic,readonly) long long sizeClassHorizontal; 
@property (nonatomic,readonly) long long sizeClassVertical; 
@property (nonatomic,readonly) long long memoryClass; 
@property (nonatomic,readonly) long long graphicsClass; 
@property (nonatomic,readonly) long long appearanceIdentifier; 
@property (nonatomic,readonly) char representsOnDemandContent; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long displayGamut; 
@property (nonatomic,readonly) long long layoutDirection; 
@property (nonatomic,readonly) NSString * appearance; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)subtype;
-(CUIRenditionKey *)key;
-(void)setKey:(CUIRenditionKey *)arg1 ;
-(long long)layoutDirection;
-(long long)displayGamut;
-(NSString *)appearance;
-(CUIRenditionKey *)renditionKey;
-(NSString *)keySignature;
-(long long)idiom;
-(long long)sizeClassHorizontal;
-(long long)sizeClassVertical;
-(long long)memoryClass;
-(long long)appearanceIdentifier;
-(char)isTintable;
-(long long)graphicsClass;
-(char)representsOnDemandContent;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(CUIThemeRendition *)_rendition;
-(char)_cacheRenditionProperties;
-(unsigned)_distilledInVersion;
-(void)setRepresentsOnDemandContent:(char)arg1 ;
-(unsigned long long)storageRef;
-(void)setStorageRef:(unsigned long long)arg1 ;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(NSString *)renditionName;
@end

