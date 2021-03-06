/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/Versions/A/ProactiveInputPredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveInputPredictions/ProactiveInputPredictions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSSet;

@interface PSGInputSuggestionsRequest : NSObject <NSSecureCoding, NSCopying> {

	char _shouldDisableAutoCaps;
	char _isResponseContextBlacklisted;
	char _isDocumentEmpty;
	NSString* _responseContext;
	NSArray* _conversationTurns;
	NSString* _adaptationContextID;
	NSString* _contextBeforeInput;
	NSString* _markedText;
	NSString* _selectedText;
	NSString* _contextAfterInput;
	NSString* _localeIdentifier;
	NSString* _bundleIdentifier;
	NSArray* _recipients;
	NSSet* _recipientNames;
	NSString* _textContentType;
	NSSet* _availableApps;
	unsigned long long _textualResponseLimit;
	unsigned long long _structuredInfoLimit;
	unsigned long long _totalSuggestionsLimit;
	NSArray* _responseKitConversationTurns;
	NSString* _initiatingProcess;
	NSRange _selectedRangeInMarkedText;

}

@property (nonatomic,readonly) NSArray * responseKitConversationTurns;                //@synthesize responseKitConversationTurns=_responseKitConversationTurns - In the implementation block
@property (nonatomic,readonly) NSString * initiatingProcess;                          //@synthesize initiatingProcess=_initiatingProcess - In the implementation block
@property (nonatomic,readonly) NSString * responseContext;                            //@synthesize responseContext=_responseContext - In the implementation block
@property (nonatomic,readonly) NSArray * conversationTurns;                           //@synthesize conversationTurns=_conversationTurns - In the implementation block
@property (nonatomic,readonly) NSString * adaptationContextID;                        //@synthesize adaptationContextID=_adaptationContextID - In the implementation block
@property (nonatomic,readonly) char shouldDisableAutoCaps;                            //@synthesize shouldDisableAutoCaps=_shouldDisableAutoCaps - In the implementation block
@property (nonatomic,readonly) char isResponseContextBlacklisted;                     //@synthesize isResponseContextBlacklisted=_isResponseContextBlacklisted - In the implementation block
@property (nonatomic,readonly) NSString * contextBeforeInput;                         //@synthesize contextBeforeInput=_contextBeforeInput - In the implementation block
@property (nonatomic,readonly) NSString * markedText;                                 //@synthesize markedText=_markedText - In the implementation block
@property (nonatomic,readonly) NSString * selectedText;                               //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,readonly) NSString * contextAfterInput;                          //@synthesize contextAfterInput=_contextAfterInput - In the implementation block
@property (nonatomic,readonly) NSRange selectedRangeInMarkedText;                     //@synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText - In the implementation block
@property (nonatomic,readonly) char isDocumentEmpty;                                  //@synthesize isDocumentEmpty=_isDocumentEmpty - In the implementation block
@property (nonatomic,readonly) NSString * localeIdentifier;                           //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                                  //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) NSSet * recipientNames;                                //@synthesize recipientNames=_recipientNames - In the implementation block
@property (nonatomic,readonly) NSString * textContentType;                            //@synthesize textContentType=_textContentType - In the implementation block
@property (nonatomic,readonly) NSSet * availableApps;                                 //@synthesize availableApps=_availableApps - In the implementation block
@property (nonatomic,readonly) unsigned long long textualResponseLimit;               //@synthesize textualResponseLimit=_textualResponseLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long structuredInfoLimit;                //@synthesize structuredInfoLimit=_structuredInfoLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long totalSuggestionsLimit;              //@synthesize totalSuggestionsLimit=_totalSuggestionsLimit - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)localeIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)contextBeforeInput;
-(NSString *)markedText;
-(NSString *)selectedText;
-(NSString *)contextAfterInput;
-(NSArray *)recipients;
-(NSSet *)recipientNames;
-(NSRange)selectedRangeInMarkedText;
-(NSString *)responseContext;
-(NSString *)textContentType;
-(char)isEqualToRequest:(id)arg1 ;
-(unsigned long long)structuredInfoLimit;
-(unsigned long long)textualResponseLimit;
-(NSArray *)conversationTurns;
-(char)isResponseContextBlacklisted;
-(char)isDocumentEmpty;
-(NSString *)initiatingProcess;
-(unsigned long long)totalSuggestionsLimit;
-(NSArray *)responseKitConversationTurns;
-(NSString *)adaptationContextID;
-(char)shouldDisableAutoCaps;
-(NSSet *)availableApps;
-(id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 responseKitConversationTurns:(id)arg3 adaptationContextID:(id)arg4 shouldDisableAutoCaps:(char)arg5 isResponseContextBlacklisted:(char)arg6 contextBeforeInput:(id)arg7 markedText:(id)arg8 selectedText:(id)arg9 contextAfterInput:(id)arg10 selectedRangeInMarkedText:(NSRange)arg11 localeIdentifier:(id)arg12 bundleIdentifier:(id)arg13 recipients:(id)arg14 recipientNames:(id)arg15 textContentType:(id)arg16 availableApps:(id)arg17 textualResponseLimit:(unsigned long long)arg18 structuredInfoLimit:(unsigned long long)arg19 totalSuggestionsLimit:(unsigned long long)arg20 initiatingProcess:(id)arg21 ;
-(id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 responseKitConversationTurns:(id)arg3 adaptationContextID:(id)arg4 shouldDisableAutoCaps:(char)arg5 isResponseContextBlacklisted:(char)arg6 contextBeforeInput:(id)arg7 markedText:(id)arg8 selectedText:(id)arg9 contextAfterInput:(id)arg10 selectedRangeInMarkedText:(NSRange)arg11 localeIdentifier:(id)arg12 bundleIdentifier:(id)arg13 recipients:(id)arg14 recipientNames:(id)arg15 textContentType:(id)arg16 availableApps:(id)arg17 textualResponseLimit:(unsigned long long)arg18 structuredInfoLimit:(unsigned long long)arg19 totalSuggestionsLimit:(unsigned long long)arg20 ;
-(id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 adaptationContextID:(id)arg3 shouldDisableAutoCaps:(char)arg4 isResponseContextBlacklisted:(char)arg5 contextBeforeInput:(id)arg6 markedText:(id)arg7 selectedText:(id)arg8 contextAfterInput:(id)arg9 selectedRangeInMarkedText:(NSRange)arg10 localeIdentifier:(id)arg11 bundleIdentifier:(id)arg12 recipients:(id)arg13 textContentType:(id)arg14 availableApps:(id)arg15 textualResponseLimit:(unsigned long long)arg16 structuredInfoLimit:(unsigned long long)arg17 ;
-(id)initWithResponseContext:(id)arg1 conversationTurns:(id)arg2 adaptationContextID:(id)arg3 shouldDisableAutoCaps:(char)arg4 isResponseContextBlacklisted:(char)arg5 contextBeforeInput:(id)arg6 markedText:(id)arg7 selectedText:(id)arg8 contextAfterInput:(id)arg9 selectedRangeInMarkedText:(NSRange)arg10 localeIdentifier:(id)arg11 bundleIdentifier:(id)arg12 recipients:(id)arg13 recipientNames:(id)arg14 textContentType:(id)arg15 availableApps:(id)arg16 textualResponseLimit:(unsigned long long)arg17 structuredInfoLimit:(unsigned long long)arg18 totalSuggestionsLimit:(unsigned long long)arg19 ;
@end

