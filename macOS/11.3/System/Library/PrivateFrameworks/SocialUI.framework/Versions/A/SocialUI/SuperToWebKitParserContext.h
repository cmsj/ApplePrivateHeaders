/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class IMMessageChatItem, IMMessage, TranscriptDOMController, DOMHTMLElement;

@interface SuperToWebKitParserContext : IMFromSuperParserContext {

	char _hasInteractableText;
	char _isFileTransferElement;
	char _isMediaElement;
	char _isPassElement;
	char _isAudioMessage;
	char _willFillBubble;
	char _didTrimEmotePrefix;
	IMMessageChatItem* _chatItem;
	IMMessage* _message;
	TranscriptDOMController* _controller;
	DOMHTMLElement* _messageElement;
	DOMHTMLElement* _containerElement;

}

@property (nonatomic,retain) DOMHTMLElement * containerElement;                 //@synthesize containerElement=_containerElement - In the implementation block
@property (assign,nonatomic) IMMessageChatItem * chatItem;                      //@synthesize chatItem=_chatItem - In the implementation block
@property (assign,nonatomic) IMMessage * message;                               //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) TranscriptDOMController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) DOMHTMLElement * messageElement;                   //@synthesize messageElement=_messageElement - In the implementation block
@property (assign) char hasInteractableText;                                    //@synthesize hasInteractableText=_hasInteractableText - In the implementation block
@property (assign) char isFileTransferElement;                                  //@synthesize isFileTransferElement=_isFileTransferElement - In the implementation block
@property (assign) char isMediaElement;                                         //@synthesize isMediaElement=_isMediaElement - In the implementation block
@property (assign) char isPassElement;                                          //@synthesize isPassElement=_isPassElement - In the implementation block
@property (assign) char isAudioMessage;                                         //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (assign) char willFillBubble;                                         //@synthesize willFillBubble=_willFillBubble - In the implementation block
@property (assign) char didTrimEmotePrefix;                                     //@synthesize didTrimEmotePrefix=_didTrimEmotePrefix - In the implementation block
-(id)name;
-(IMMessage *)message;
-(void)setMessage:(IMMessage *)arg1 ;
-(TranscriptDOMController *)controller;
-(void)setController:(TranscriptDOMController *)arg1 ;
-(char)isAudioMessage;
-(void)setIsAudioMessage:(char)arg1 ;
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(char)shouldPreprocess;
-(void)parserDidEnd:(id)arg1 ;
-(IMMessageChatItem *)chatItem;
-(void)setChatItem:(IMMessageChatItem *)arg1 ;
-(id)initWithChatItem:(id)arg1 textToParse:(id)arg2 elementName:(id)arg3 domController:(id)arg4 ;
-(id)outMessageElement;
-(char)hasInteractableText;
-(char)isFileTransferElement;
-(char)isMediaElement;
-(char)willFillBubble;
-(DOMHTMLElement *)containerElement;
-(char)_workaroundWebKitLineHeightBug;
-(void)setDidTrimEmotePrefix:(char)arg1 ;
-(DOMHTMLElement *)messageElement;
-(void)setIsPassElement:(char)arg1 ;
-(void)setIsMediaElement:(char)arg1 ;
-(void)setWillFillBubble:(char)arg1 ;
-(void)setIsFileTransferElement:(char)arg1 ;
-(id)_outMessageElementAsString;
-(void)setMessageElement:(DOMHTMLElement *)arg1 ;
-(void)setHasInteractableText:(char)arg1 ;
-(char)isPassElement;
-(char)didTrimEmotePrefix;
-(void)setContainerElement:(DOMHTMLElement *)arg1 ;
-(void)appendText:(id)arg1 toElement:(id)arg2 ;
@end
