/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKDocumentCanvasSubclassingHooks.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OKDocument, NSString, NSMutableDictionary;

@interface OKDocumentCanvas : NSObject <OKDocumentCanvasSubclassingHooks, NSCopying> {

	OKDocument* _document;
	id _parent;
	NSString* _name;
	NSString* _uuid;
	NSMutableDictionary* _settings;
	NSMutableDictionary* _userSettings;
	NSMutableDictionary* _userData;
	NSMutableDictionary* _properties;
	char _isTemplate;
	char _isResolved;

}

@property (nonatomic,copy,readonly) NSString * uuid;                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) OKDocument * document;                                  //@synthesize document=_document - In the implementation block
@property (assign,nonatomic) id parent; 
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * settings;                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * userSettings;              //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * userData;                  //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * properties;                         //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) char isTemplate;                                        //@synthesize isTemplate=_isTemplate - In the implementation block
@property (assign,nonatomic) char isResolved;                                        //@synthesize isResolved=_isResolved - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(NSString *)uuid;
-(id)dictionary;
-(void)setName:(NSString *)arg1 ;
-(NSMutableDictionary *)userData;
-(id)parent;
-(id)keyPath;
-(OKDocument *)document;
-(char)isResolved;
-(char)isTemplate;
-(void)setDocument:(OKDocument *)arg1 ;
-(NSMutableDictionary *)properties;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)settings;
-(void)setParent:(id)arg1 ;
-(void)setIsTemplate:(char)arg1 ;
-(void)setIsResolved:(char)arg1 ;
-(NSMutableDictionary *)userSettings;
-(void)resolveIfNeeded;
-(id)mergedSettings;
-(void)addSettingsFromDictionary:(id)arg1 ;
-(void)parentApplyValueForKeyPath:(id)arg1 ;
-(void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setUserDataObject:(id)arg1 forKeyPath:(id)arg2 ;
-(id)canvasWithName:(id)arg1 ;
-(void)_setSettingsObject:(id)arg1 forKey:(id)arg2 ;
-(void)_setUserDataObject:(id)arg1 forKey:(id)arg2 ;
-(void)_setPropertiesObject:(id)arg1 forKey:(id)arg2 ;
-(void)setPropertiesObject:(id)arg1 forKeyPath:(id)arg2 ;
@end

