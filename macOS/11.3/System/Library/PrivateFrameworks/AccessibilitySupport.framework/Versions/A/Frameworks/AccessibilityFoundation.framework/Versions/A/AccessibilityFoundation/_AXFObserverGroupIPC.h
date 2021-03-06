/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
@class NSString, AXFUIElement, NSMutableDictionary;

@interface _AXFObserverGroupIPC : NSObject {

	char __registered;
	AXObserverRef _observer;
	long long _observerID;
	NSString* __name;
	AXFUIElement* __element;
	AXFUIElement* __application;
	NSMutableDictionary* __observers;

}

@property (nonatomic,copy) NSString * _name;                                //@synthesize _name=__name - In the implementation block
@property (nonatomic,retain) AXFUIElement * _element;                       //@synthesize _element=__element - In the implementation block
@property (nonatomic,retain) AXFUIElement * _application;                   //@synthesize _application=__application - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _observers;              //@synthesize _observers=__observers - In the implementation block
@property (assign,nonatomic) char _registered;                              //@synthesize _registered=__registered - In the implementation block
@property (nonatomic,readonly) long long observerID;                        //@synthesize observerID=_observerID - In the implementation block
@property (assign,nonatomic) AXObserverRef observer;                        //@synthesize observer=_observer - In the implementation block
+(id)applicationIdentifierForObserverID:(long long)arg1 ;
+(void)setApplicationIdentifier:(id)arg1 observerID:(long long)arg2 ;
-(char)unregisterObserverAsync;
-(void)pruneObservers;
-(char)isObserving:(id)arg1 element:(id)arg2 ;
-(id)initWithName:(id)arg1 element:(id)arg2 application:(id)arg3 ;
-(char)addObserver:(id)arg1 selector:(SEL)arg2 queue:(id)arg3 ;
-(char)removeObserver:(id)arg1 selector:(SEL)arg2 ;
-(char)unregisterObserver;
-(void)fireWithElement:(id)arg1 userInfo:(id)arg2 ;
-(void)set_registered:(char)arg1 ;
-(char)_unregisterObserverSync:(char)arg1 ;
-(void)set_application:(AXFUIElement *)arg1 ;
-(void)dealloc;
-(NSString *)_name;
-(NSMutableDictionary *)_observers;
-(char)_registered;
-(void)setObserver:(AXObserverRef)arg1 ;
-(AXFUIElement *)_element;
-(AXUIElementRef)_elementRef;
-(long long)observerID;
-(AXObserverRef)observer;
-(AXFUIElement *)_application;
-(char)isObserving;
-(void)set_name:(NSString *)arg1 ;
-(void)set_element:(AXFUIElement *)arg1 ;
-(void)set_observers:(NSMutableDictionary *)arg1 ;
-(char)registerObserver;
-(id)copyForFiring;
@end

