/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OSAKit/OSAKit-Structs.h>
@class OSALanguagePrivate, NSString;

@interface OSALanguage : NSObject {

	OSALanguagePrivate* _private;

}

@property (readonly) ComponentInstanceRecord* componentInstance; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * info; 
@property (copy,readonly) NSString * version; 
@property (readonly) unsigned type; 
@property (readonly) unsigned subType; 
@property (readonly) unsigned manufacturer; 
@property (readonly) unsigned long long features; 
@property (getter=isThreadSafe,readonly) char threadSafe; 
+(id)availableLanguages;
+(id)defaultLanguage;
+(ComponentInstanceRecord*)defaultAppleScriptComponentInstance;
+(ComponentInstanceRecord*)defaultComponentInstance;
+(id)finalizeDispatchQueue;
+(id)genericComponentInstance;
+(id)languageForSubType:(unsigned)arg1 ;
+(id)languageForName:(id)arg1 ;
+(id)languageForScriptDataDescriptor:(id)arg1 ;
+(void)setDefaultLanguage:(id)arg1 ;
+(id)languageForScript:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(unsigned)type;
-(NSString *)version;
-(NSString *)info;
-(id)initWithComponent:(ComponentRecord*)arg1 ;
-(ComponentRecord*)component;
-(unsigned)manufacturer;
-(unsigned)subType;
-(unsigned long long)features;
-(ComponentInstanceRecord*)componentInstance;
-(id)sharedLanguageInstance;
-(char)isThreadSafe;
-(char)supportsCompiling;
-(char)supportsGetSource;
-(char)supportsAECoercion;
-(char)supportsAESending;
-(char)supportsRecording;
-(char)supportsConvenience;
-(char)supportsDialects;
-(char)supportsEventHandling;
@end
