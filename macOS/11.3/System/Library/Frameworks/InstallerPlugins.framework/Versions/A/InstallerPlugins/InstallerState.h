/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InstallerPlugins.framework/Versions/A/InstallerPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InstallerPlugins/InstallerPlugins-Structs.h>
@class NSDictionary, NSString, NSArray;

@interface InstallerState : NSObject {

	InstallerState_Private* _private;

}

@property (assign) NSDictionary * stateDictionary; 
@property (readonly) char licenseAgreed; 
@property (readonly) NSString * licenseAgreedLanguage; 
@property (readonly) NSString * targetVolumePath; 
@property (readonly) NSString * targetPath; 
@property (readonly) NSArray * choiceDictionaries; 
@property (readonly) char installStarted; 
@property (readonly) char installSucceeded; 
-(void)dealloc;
-(id)description;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)stateDictionary;
-(void)setStateDictionary:(NSDictionary *)arg1 ;
-(NSString *)targetPath;
-(char)licenseAgreed;
-(NSString *)licenseAgreedLanguage;
-(NSString *)targetVolumePath;
-(NSArray *)choiceDictionaries;
-(id)choiceDictionaryForIdentifier:(id)arg1 ;
-(char)installStarted;
-(char)installSucceeded;
-(void)setChoiceDictionary:(id)arg1 ;
-(void)removeChoiceDictionaries;
@end

