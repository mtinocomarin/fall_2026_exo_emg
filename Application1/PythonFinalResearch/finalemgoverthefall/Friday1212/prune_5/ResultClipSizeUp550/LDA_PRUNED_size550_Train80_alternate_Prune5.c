// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.37%
// test_accuracy: 73.75%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_20.txt']}
// generated: 2025-12-12 15:48:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.619122, 0.619145,
    -0.297852, 0.297832,
    0.409358, -0.409384,
    0.755724, -0.755705,
    0.767691, -0.767671,
    -0.813078, 0.813071,
    -0.014641, 0.014641,
    -0.106598, 0.106586,
    -0.468407, 0.468359,
    0.290681, -0.290574,
    -0.387486, 0.387457,
    0.231569, -0.231630,
};

float Cg_init[2] = {
    -0.331015, -0.331015
};

float xstd_init[12] = {
    0.003901, 0.001433, 0.107355, 0.175307, 0.001557, 0.000461, 0.027714, 0.077906, 0.001748, 0.000093, 0.017280, 0.067438
};

float xmean_init[12] = {
    0.009968, -0.006203, 0.179556, 0.587704, 0.003193, -0.007736, 0.006963, 0.049333, 0.003261, -0.007806, 0.004543, 0.068593
};

