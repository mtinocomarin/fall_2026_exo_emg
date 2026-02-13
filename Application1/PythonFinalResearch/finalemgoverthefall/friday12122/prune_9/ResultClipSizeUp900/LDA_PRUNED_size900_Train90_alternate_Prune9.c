// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 84.20%
// test_accuracy: 77.94%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt']}
// generated: 2025-12-12 16:07:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.664772, 0.664721,
    -0.255119, 0.255151,
    0.519812, -0.519835,
    0.549950, -0.549925,
    0.848235, -0.848313,
    -0.894418, 0.894539,
    -0.134072, 0.134070,
    -0.078561, 0.078531,
    0.652201, -0.652374,
    0.040523, -0.040044,
    -0.341070, 0.340910,
    -0.010552, 0.010357,
};

float Cg_init[2] = {
    -0.445327, -0.445350
};

float xstd_init[12] = {
    0.003197, 0.001219, 0.102062, 0.165751, 0.001194, 0.000365, 0.018332, 0.067173, 0.000507, 0.000071, 0.013988, 0.060559
};

float xmean_init[12] = {
    0.009486, -0.006344, 0.172492, 0.583704, 0.003052, -0.007761, 0.004793, 0.047103, 0.003076, -0.007817, 0.003486, 0.063138
};

