[@bs.module "react-dropzone"]
external reactClass : ReasonReact.reactClass = "default";

type file = {
  .
  "lastModified": int,
  "lastModifiedDate": string,
  "name": string,
  "size": int,
  "_type": string,
  "webkitRelativePath": string,
  "preview": string,
};

[@bs.obj]
external makeProps :
  (
    ~accept: array(string)=?,
    ~disableClick: bool=?,
    ~disabled: bool=?,
    ~disablePreview: bool=?,
    ~preventDropOnDocument: bool=?,
    ~multiple: bool=?,
    ~name: string=?,
    ~maxSize: int=?,
    ~minSize: int=?,
    ~className: string=?,
    ~activeClassName: string=?,
    ~acceptClassName: string=?,
    ~rejectClassName: string=?,
    ~disabledClassName: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~activeStyle: ReactDOMRe.Style.t=?,
    ~acceptStyle: ReactDOMRe.Style.t=?,
    ~rejectStyle: ReactDOMRe.Style.t=?,
    ~disabledStyle: ReactDOMRe.Style.t=?,
    ~getDataTransferItems: ReactEventRe.Mouse.t => list(file)=?,
    ~onClick: ReactEventRe.Mouse.t => unit=?,
    ~onDrop: (list(file), list(file)) => unit=?,
    ~onDropAccepted: ReactEventRe.Mouse.t => unit=?,
    ~onDropRejected: ReactEventRe.Mouse.t => unit=?,
    ~onDragStart: ReactEventRe.Mouse.t => unit=?,
    ~onDragEnter: ReactEventRe.Mouse.t => unit=?,
    ~onDragOver: ReactEventRe.Mouse.t => unit=?,
    ~onDragLeave: ReactEventRe.Mouse.t => unit=?,
    ~onFileDialogCancel: ReactEventRe.Mouse.t => unit=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~accept: option(list(string))=?,
      ~disableClick: option(bool)=?,
      ~disabled: option(bool)=?,
      ~disablePreview: option(bool)=?,
      ~preventDropOnDocument: option(bool)=?,
      ~multiple: option(bool)=?,
      ~name: option(string)=?,
      ~maxSize: option(int)=?,
      ~minSize: option(int)=?,
      ~className: option(string)=?,
      ~activeClassName: option(string)=?,
      ~acceptClassName: option(string)=?,
      ~rejectClassName: option(string)=?,
      ~disabledClassName: option(string)=?,
      ~style: option(ReactDOMRe.Style.t)=?,
      ~activeStyle: option(ReactDOMRe.Style.t)=?,
      ~acceptStyle: option(ReactDOMRe.Style.t)=?,
      ~rejectStyle: option(ReactDOMRe.Style.t)=?,
      ~disabledStyle: option(ReactDOMRe.Style.t)=?,
      ~getDataTransferItems: option(ReactEventRe.Mouse.t => list(file))=?,
      ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
      ~onDrop: option((list(file), list(file)) => unit)=?,
      ~onDropAccepted: option(ReactEventRe.Mouse.t => unit)=?,
      ~onDropRejected: option(ReactEventRe.Mouse.t => unit)=?,
      ~onDragStart: option(ReactEventRe.Mouse.t => unit)=?,
      ~onDragEnter: option(ReactEventRe.Mouse.t => unit)=?,
      ~onDragOver: option(ReactEventRe.Mouse.t => unit)=?,
      ~onDragLeave: option(ReactEventRe.Mouse.t => unit)=?,
      ~onFileDialogCancel: option(ReactEventRe.Mouse.t => unit)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~accept=?Js.Option.map((. a) => Array.of_list(a), accept),
        ~disableClick=?
          Js.Option.map((. b) => Js.Boolean.to_js_boolean(b), disableClick),
        ~disabled=?
          Js.Option.map((. b) => Js.Boolean.to_js_boolean(b), disabled),
        ~disablePreview=?
          Js.Option.map(
            (. b) => Js.Boolean.to_js_boolean(b),
            disablePreview,
          ),
        ~preventDropOnDocument=?
          Js.Option.map(
            (. b) => Js.Boolean.to_js_boolean(b),
            preventDropOnDocument,
          ),
        ~multiple=?
          Js.Option.map((. b) => Js.Boolean.to_js_boolean(b), multiple),
        ~name?,
        ~maxSize?,
        ~minSize?,
        ~className?,
        ~activeClassName?,
        ~acceptClassName?,
        ~rejectClassName?,
        ~disabledClassName?,
        ~style?,
        ~activeStyle?,
        ~acceptStyle?,
        ~rejectStyle?,
        ~disabledStyle?,
        ~getDataTransferItems?,
        ~onClick?,
        ~onDrop?,
        ~onDropAccepted?,
        ~onDropRejected?,
        ~onDragStart?,
        ~onDragEnter?,
        ~onDragOver?,
        ~onDragLeave?,
        ~onFileDialogCancel?,
        (),
      ),
    children,
  );