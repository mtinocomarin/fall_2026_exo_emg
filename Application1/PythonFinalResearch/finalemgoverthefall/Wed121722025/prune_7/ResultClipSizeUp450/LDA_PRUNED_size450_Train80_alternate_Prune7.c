// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.75%
// test_accuracy: 54.69%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 13:44:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.609509, 0.609426,
    0.342709, -0.342475,
    0.174914, -0.174939,
    -0.184093, 0.183954,
    -0.633369, 0.633339,
    -0.133041, 0.133072,
    0.282545, -0.282531,
    0.303354, -0.303332,
    -0.669384, 0.669502,
    0.232908, -0.233127,
    -0.045034, 0.045106,
    0.232772, -0.232729,
};

float Cg_init[2] = {
    -0.253185, -0.253180
};

float xstd_init[12] = {
    0.001026, 0.000081, 0.012264, 0.082398, 0.003024, 0.000812, 0.083877, 0.179021, 0.000860, 0.000112, 0.018029, 0.071876
};

float xmean_init[12] = {
    0.006469, -0.007686, 0.004733, 0.146600, 0.008729, -0.006835, 0.103533, 0.448700, 0.004345, -0.007717, 0.009200, 0.127400
};

