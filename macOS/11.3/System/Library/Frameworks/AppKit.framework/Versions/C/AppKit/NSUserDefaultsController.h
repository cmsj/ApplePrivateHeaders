/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSController.h>

@class NSUserDefaults, NSMutableDictionary, NSDictionary;

@interface NSUserDefaultsController : NSController {

	NSUserDefaults* _defaults;
	NSMutableDictionary* _valueBuffer;
	NSDictionary* _initialValues;
	struct {
		unsigned _sharedInstance : 1;
		unsigned _appliesImmediately : 1;
		unsigned _reservedUserDefaultsController : 30;
	}  _userDefaultsControllerFlags;

}

@property (readonly) NSUserDefaults * defaults; 
@property (copy) NSDictionary * initialValues; 
@property (assign) char appliesImmediately; 
@property (readonly) char hasUnappliedChanges; 
@property (readonly) id values; 
+(id)_nonAutomaticObservingKeys;
+(id)_keyValueBindingAccessPoints;
+(id)_modelAndProxyKeys;
+(id)sharedUserDefaultsController;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)values;
-(void)_init;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(NSUserDefaults *)defaults;
-(void)_dealloc;
-(id)_singleValueForKey:(id)arg1 ;
-(id)_singleMutableArrayValueForKey:(id)arg1 ;
-(void)_setSingleValue:(id)arg1 forKey:(id)arg2 ;
-(void)_invokeSingleSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ;
-(id)_controllerKeys;
-(id)initWithDefaults:(id)arg1 initialValues:(id)arg2 ;
-(void)setInitialValues:(NSDictionary *)arg1 ;
-(void)save:(id)arg1 ;
-(void)_setDefaults:(id)arg1 ;
-(char)appliesImmediately;
-(NSDictionary *)initialValues;
-(id)_valueBuffer;
-(void)_applyValue:(id)arg1 forKey:(id)arg2 registrationDomain:(id)arg3 ;
-(void)_applyAllValuesFromValueBuffer;
-(void)revert:(id)arg1 ;
-(void)_executeSave:(id)arg1 didCommitSuccessfully:(char)arg2 actionSender:(id)arg3 ;
-(void)setAppliesImmediately:(char)arg1 ;
-(char)hasUnappliedChanges;
-(void)revertToInitialValues:(id)arg1 ;
-(char)_isSharedUserDefaultsControllerProxy;
-(void)_setSharedUserDefaultsControllerProxy:(char)arg1 ;
@end

