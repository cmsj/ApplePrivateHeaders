/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIUserModeling.h>
#import <libobjc.A.dylib/TIMetricProviding.h>

@protocol TIUserModelDataStoring, TIUserModelConfigurationDelegate;
@class NSArray, NSString, NSMutableDictionary, NSDictionary, NSDate;

@interface TIUserModel : NSObject <TIUserModeling, TIMetricProviding> {

	NSString* _inputMode;
	id<TIUserModelDataStoring> _userModelStore;
	NSMutableDictionary* _durableCounters;
	NSMutableDictionary* _userModelValuesCollection;
	NSDictionary* _settingsDictionary;
	double _timeOfLastPersist;
	char _explicitTearDown;
	char _userModelRateLimitingDisabled;
	id<TIUserModelConfigurationDelegate> _configurationDelegate;
	NSDate* _loadedDate;

}

@property (nonatomic,retain) NSDate * loadedDate;                                                            //@synthesize loadedDate=_loadedDate - In the implementation block
@property (assign) char userModelRateLimitingDisabled;                                                       //@synthesize userModelRateLimitingDisabled=_userModelRateLimitingDisabled - In the implementation block
@property (nonatomic,readonly) NSString * inputMode;                                                         //@synthesize inputMode=_inputMode - In the implementation block
@property (readonly) char explicitTearDown;                                                                  //@synthesize explicitTearDown=_explicitTearDown - In the implementation block
@property (assign,nonatomic,__weak) id<TIUserModelConfigurationDelegate> configurationDelegate;              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * cachedSettingsDictionary; 
@property (nonatomic,readonly) NSArray * contexts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tearDown;
-(NSArray *)contexts;
-(NSString *)inputMode;
-(void)loadIfNecessary;
-(char)persistForDate:(id)arg1 ;
-(int)valueForDurableKey:(id)arg1 ;
-(id)valuesFromContext:(id)arg1 ;
-(void)addToDurableCounter:(int)arg1 forKey:(id)arg2 ;
-(void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4 ;
-(void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4 ;
-(id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 ;
-(id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2 explicitTearDown:(char)arg3 ;
-(void)configureDurableCounterForName:(id)arg1 ;
-(void)configureDurableCounters;
-(void)doLoad;
-(id)populateSettingsDictionary;
-(void)loadSettings;
-(NSDictionary *)cachedSettingsDictionary;
-(void)trackPowerLogIfNecessary;
-(id<TIUserModelConfigurationDelegate>)configurationDelegate;
-(void)setConfigurationDelegate:(id<TIUserModelConfigurationDelegate>)arg1 ;
-(char)explicitTearDown;
-(NSDate *)loadedDate;
-(void)setLoadedDate:(NSDate *)arg1 ;
-(char)userModelRateLimitingDisabled;
-(void)setUserModelRateLimitingDisabled:(char)arg1 ;
@end

