// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.17%
// test_accuracy: 67.50%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt'], 'act1': ['act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-12 12:44:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.800607, 0.800671,
    0.354785, -0.354827,
    0.563823, -0.563877,
    0.659846, -0.659842,
    -0.403296, 0.403075,
    0.184117, -0.183819,
    -0.147309, 0.147295,
    -0.007781, 0.007719,
    0.262806, -0.262675,
    -0.099040, 0.098769,
    -0.572896, 0.572969,
    -0.011475, 0.011567,
};

float Cg_init[2] = {
    -0.352883, -0.352890
};

float xstd_init[12] = {
    0.003864, 0.001669, 0.150398, 0.206129, 0.001051, 0.000183, 0.027435, 0.078786, 0.000657, 0.000165, 0.030281, 0.106761
};

float xmean_init[12] = {
    0.010156, -0.005811, 0.244948, 0.688638, 0.003370, -0.007766, 0.009121, 0.073913, 0.003522, -0.007731, 0.013604, 0.121334
};

