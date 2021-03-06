/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface CIPlugIn : NSObject {

	void** _priv[8];

}

@property (nonatomic,retain) NSBundle * plugInBundle; 
@property (assign,nonatomic) int loadStatus; 
@property (nonatomic,retain) NSDictionary * descriptionDictionary; 
@property (assign,nonatomic) long long flags; 
@property (nonatomic,retain) id<CIPlugInRegistration> pluginLoader; 
@property (nonatomic,retain,readonly) NSDictionary * filtersDictionary; 
+(void)scanForPlugInsWithFlags:(int)arg1 ;
+(void)addPlugInAtURL:(id)arg1 flags:(int)arg2 ;
+(void)loadNonExecutablePlugIns;
+(void)loadPlugIn:(id)arg1 allowNonExecutable:(char)arg2 ;
+(void)loadPlugIn:(id)arg1 allowExecutableCode:(char)arg2 ;
+(void)loadNonExecutablePlugIn:(id)arg1 ;
+(char)isPlugInAlreadyLoadedAtURL:(id)arg1 ;
+(id)uniqueIdentifierForFileAtURL:(id)arg1 ;
+(id)imageUnitDirectoryURLs;
+(void)addAllPlugInsAtURL:(id)arg1 flags:(int)arg2 ;
+(void)loadAllPlugIns;
+(char)hasPluginWithIdentifier:(id)arg1 ;
-(id)initWithURL:(id)arg1 flags:(int)arg2 ;
-(NSBundle *)plugInBundle;
-(int)loadPlugIn;
-(NSDictionary *)filtersDictionary;
-(void)setPlugInBundle:(NSBundle *)arg1 ;
-(void)finalize;
-(long long)flags;
-(void)dealloc;
-(void)setFlags:(long long)arg1 ;
-(void)setLoadStatus:(int)arg1 ;
-(int)loadStatus;
-(id<CIPlugInRegistration>)pluginLoader;
-(void)setPluginLoader:(id<CIPlugInRegistration>)arg1 ;
-(NSDictionary *)descriptionDictionary;
-(void)setDescriptionDictionary:(NSDictionary *)arg1 ;
@end

