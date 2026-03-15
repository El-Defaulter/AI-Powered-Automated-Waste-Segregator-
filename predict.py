
import cv2
import numpy as np
from tensorflow.keras.models import load_model

model = load_model("waste_classifier_model.h5")

classes = ["dry","metal","wet"]

def predict_image(path):
    img = cv2.imread(path)
    img = cv2.resize(img,(224,224))
    img = img/255.0
    img = np.expand_dims(img,axis=0)

    prediction = model.predict(img)
    class_id = np.argmax(prediction)

    return classes[class_id]

if __name__ == "__main__":
    result = predict_image("test.jpg")
    print("Predicted Waste Type:", result)
